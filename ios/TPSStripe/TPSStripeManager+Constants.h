#import <Foundation/Foundation.h>

#define TPSStripeType(identifier) TPSStripe_##identifier##Key
#define TPSStripeBridgeTypeDefine(methodOrIdentifier) typedef NSString * TPSStripeType(methodOrIdentifier) NS_EXTENSIBLE_STRING_ENUM

#define TPSStripeBridgeKeyDeclare(method, key) extern TPSStripeType(method) const TPSStripe_##method##Key_##key

TPSStripeBridgeTypeDefine(createPaymentMethod);
TPSStripeBridgeKeyDeclare(createPaymentMethod, id);
TPSStripeBridgeKeyDeclare(createPaymentMethod, billingDetails);
TPSStripeBridgeKeyDeclare(createPaymentMethod, card);
//TPSStripeBridgeKeyDeclare(createPaymentMethod, iDEAL);
TPSStripeBridgeKeyDeclare(createPaymentMethod, metadata);
TPSStripeBridgeKeyDeclare(createPaymentMethod, customerId);

TPSStripeBridgeTypeDefine(PaymentMethod);
TPSStripeBridgeKeyDeclare(PaymentMethod, id);
TPSStripeBridgeKeyDeclare(PaymentMethod, created);
TPSStripeBridgeKeyDeclare(PaymentMethod, livemode);
TPSStripeBridgeKeyDeclare(PaymentMethod, type);
TPSStripeBridgeKeyDeclare(PaymentMethod, billingDetails);
TPSStripeBridgeKeyDeclare(PaymentMethod, card);
TPSStripeBridgeKeyDeclare(PaymentMethod, customerId);
TPSStripeBridgeKeyDeclare(PaymentMethod, metadata);

TPSStripeBridgeTypeDefine(PaymentMethodCard);
TPSStripeBridgeKeyDeclare(PaymentMethodCard, brand);
TPSStripeBridgeKeyDeclare(PaymentMethodCard, country);
TPSStripeBridgeKeyDeclare(PaymentMethodCard, expMonth);
TPSStripeBridgeKeyDeclare(PaymentMethodCard, expYear);
TPSStripeBridgeKeyDeclare(PaymentMethodCard, funding);
TPSStripeBridgeKeyDeclare(PaymentMethodCard, last4);

TPSStripeBridgeTypeDefine(PaymentMethodBillingDetails);
TPSStripeBridgeKeyDeclare(PaymentMethodBillingDetails, address);
TPSStripeBridgeKeyDeclare(PaymentMethodBillingDetails, email);
TPSStripeBridgeKeyDeclare(PaymentMethodBillingDetails, name);
TPSStripeBridgeKeyDeclare(PaymentMethodBillingDetails, phone);

TPSStripeBridgeTypeDefine(PaymentMethodAddress);
TPSStripeBridgeKeyDeclare(PaymentMethodAddress, city);
TPSStripeBridgeKeyDeclare(PaymentMethodAddress, country);
TPSStripeBridgeKeyDeclare(PaymentMethodAddress, line1);
TPSStripeBridgeKeyDeclare(PaymentMethodAddress, line2);
TPSStripeBridgeKeyDeclare(PaymentMethodAddress, postalCode);
TPSStripeBridgeKeyDeclare(PaymentMethodAddress, state);

TPSStripeBridgeTypeDefine(CardParams);
TPSStripeBridgeKeyDeclare(CardParams, number);
TPSStripeBridgeKeyDeclare(CardParams, expMonth);
TPSStripeBridgeKeyDeclare(CardParams, expYear);
TPSStripeBridgeKeyDeclare(CardParams, cvc);
TPSStripeBridgeKeyDeclare(CardParams, currency);
TPSStripeBridgeKeyDeclare(CardParams, name);
TPSStripeBridgeKeyDeclare(CardParams, addressLine1);
TPSStripeBridgeKeyDeclare(CardParams, addressLine2);
TPSStripeBridgeKeyDeclare(CardParams, addressCity);
TPSStripeBridgeKeyDeclare(CardParams, addressState);
TPSStripeBridgeKeyDeclare(CardParams, addressCountry);
TPSStripeBridgeKeyDeclare(CardParams, addressZip);
TPSStripeBridgeKeyDeclare(CardParams, token);

TPSStripeBridgeTypeDefine(confirmPaymentIntent);
TPSStripeBridgeKeyDeclare(confirmPaymentIntent, clientSecret);
TPSStripeBridgeKeyDeclare(confirmPaymentIntent, paymentMethod);
TPSStripeBridgeKeyDeclare(confirmPaymentIntent, paymentMethodId);
TPSStripeBridgeKeyDeclare(confirmPaymentIntent, sourceId);
TPSStripeBridgeKeyDeclare(confirmPaymentIntent, returnURL);
TPSStripeBridgeKeyDeclare(confirmPaymentIntent, savePaymentMethod);

TPSStripeBridgeTypeDefine(ConfirmPaymentIntentResult);
TPSStripeBridgeKeyDeclare(ConfirmPaymentIntentResult, paymentIntentId);
TPSStripeBridgeKeyDeclare(ConfirmPaymentIntentResult, status);

TPSStripeBridgeTypeDefine(authenticatePaymentIntent);
TPSStripeBridgeKeyDeclare(authenticatePaymentIntent, clientSecret);

TPSStripeBridgeTypeDefine(AuthenticatePaymentIntentResult);
TPSStripeBridgeKeyDeclare(AuthenticatePaymentIntentResult, paymentIntentId);
TPSStripeBridgeKeyDeclare(AuthenticatePaymentIntentResult, status);

TPSStripeBridgeTypeDefine(confirmSetupIntent);
TPSStripeBridgeKeyDeclare(confirmSetupIntent, clientSecret);
TPSStripeBridgeKeyDeclare(confirmSetupIntent, paymentMethod);
TPSStripeBridgeKeyDeclare(confirmSetupIntent, paymentMethodId);
TPSStripeBridgeKeyDeclare(confirmSetupIntent, sourceId);
TPSStripeBridgeKeyDeclare(confirmSetupIntent, returnURL);
TPSStripeBridgeKeyDeclare(confirmSetupIntent, savePaymentMethod);

TPSStripeBridgeTypeDefine(ConfirmSetupIntentResult);
TPSStripeBridgeKeyDeclare(ConfirmSetupIntentResult, setupIntentId);
TPSStripeBridgeKeyDeclare(ConfirmSetupIntentResult, status);

TPSStripeBridgeTypeDefine(authenticateSetupIntent);
TPSStripeBridgeKeyDeclare(authenticateSetupIntent, clientSecret);

TPSStripeBridgeTypeDefine(AuthenticateSetupIntentResult);
TPSStripeBridgeKeyDeclare(AuthenticateSetupIntentResult, setupIntentId);
TPSStripeBridgeKeyDeclare(AuthenticateSetupIntentResult, status);

TPSStripeBridgeTypeDefine(PaymentIntentStatus);
TPSStripeBridgeKeyDeclare(PaymentIntentStatus, unknown);
TPSStripeBridgeKeyDeclare(PaymentIntentStatus, canceled);
TPSStripeBridgeKeyDeclare(PaymentIntentStatus, processing);
TPSStripeBridgeKeyDeclare(PaymentIntentStatus, requires_action);
TPSStripeBridgeKeyDeclare(PaymentIntentStatus, requires_capture);
TPSStripeBridgeKeyDeclare(PaymentIntentStatus, requires_paymentMethod);
TPSStripeBridgeKeyDeclare(PaymentIntentStatus, requires_confirmation);
TPSStripeBridgeKeyDeclare(PaymentIntentStatus, succeeded);

TPSStripeBridgeTypeDefine(SetupIntentStatus);
TPSStripeBridgeKeyDeclare(SetupIntentStatus, unknown);
TPSStripeBridgeKeyDeclare(SetupIntentStatus, canceled);
TPSStripeBridgeKeyDeclare(SetupIntentStatus, processing);
TPSStripeBridgeKeyDeclare(SetupIntentStatus, requires_action);
TPSStripeBridgeKeyDeclare(SetupIntentStatus, requires_paymentMethod);
TPSStripeBridgeKeyDeclare(SetupIntentStatus, requires_confirmation);
TPSStripeBridgeKeyDeclare(SetupIntentStatus, succeeded);

#undef TPSStripeBridgeKeyDeclare
#undef TPSStripeBridgeTypeDefine

// Lookup helper
#define TPSStripeParam(methodOrIdentifier, key) (TPSStripe_##methodOrIdentifier##Key_##key)
