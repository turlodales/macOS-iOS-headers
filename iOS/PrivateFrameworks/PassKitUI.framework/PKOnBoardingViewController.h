/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKOnBoardingViewController : PKExplanationViewController <PKExplanationViewControllerDelegate, PKPaymentSetupPresentationProtocol, PKViewControllerPreflightable> {
    PKDynamicProvisioningPageContent * _currentPage;
    UIImage * _heroImage;
    <PKSetupFlowControllerProtocol> * _parentFlowController;
    PKPaymentSetupProduct * _paymentSetupProduct;
    PKPaymentProvisioningController * _provisioningController;
    <PKPaymentSetupViewControllerDelegate> * _setupDelegate;
}

@property (nonatomic, retain) PKDynamicProvisioningPageContent *currentPage;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImage *heroImage;
@property (nonatomic) <PKSetupFlowControllerProtocol> *parentFlowController;
@property (nonatomic, retain) PKPaymentSetupProduct *paymentSetupProduct;
@property (nonatomic, retain) PKPaymentProvisioningController *provisioningController;
@property (nonatomic) <PKPaymentSetupViewControllerDelegate> *setupDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)currentPage;
- (void)explanationViewControllerDidSelectCancel:(id)arg1;
- (void)explanationViewControllerDidSelectDone:(id)arg1;
- (void)explanationViewDidSelectBodyButton:(id)arg1;
- (void)explanationViewDidSelectContinue:(id)arg1;
- (void)explanationViewDidSelectSetupLater:(id)arg1;
- (void)handleNotifyRequested;
- (void)handleProductAvailable;
- (void)handleSetupLater;
- (id)heroImage;
- (id)initWithParentFlowController:(id)arg1 setupDelegate:(id)arg2 context:(long long)arg3 provisioningController:(id)arg4 paymentSetupProduct:(id)arg5 currentPage:(id)arg6;
- (id)nextOnboardingViewControllerWithPage:(id)arg1 product:(id)arg2;
- (id)parentFlowController;
- (id)paymentSetupMarker;
- (id)paymentSetupProduct;
- (void)preflightWithCompletion:(id /* block */)arg1;
- (id)provisioningController;
- (void)setCurrentPage:(id)arg1;
- (void)setHeroImage:(id)arg1;
- (void)setParentFlowController:(id)arg1;
- (void)setPaymentSetupProduct:(id)arg1;
- (void)setProvisioningController:(id)arg1;
- (void)setSetupDelegate:(id)arg1;
- (id)setupDelegate;
- (void)terminateSetupFlow;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
