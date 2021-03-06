/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
 */

@interface AMSUIWebButtonModel : NSObject <AMSUIWebModelInterface> {
    <AMSUIWebActionRunnable> * _action;
    AMSUIWebActivityIndicatorModel * _activityIndicator;
    bool  _bold;
    bool  _enabled;
    long long  _style;
    NSString * _title;
    NSDictionary * _underlyingJSObject;
}

@property (nonatomic, retain) <AMSUIWebActionRunnable> *action;
@property (nonatomic, retain) AMSUIWebActivityIndicatorModel *activityIndicator;
@property (nonatomic) bool bold;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long style;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) NSDictionary *underlyingJSObject;

- (void).cxx_destruct;
- (id)action;
- (id)activityIndicator;
- (bool)bold;
- (id)createButtonImageWithNavModel:(id)arg1;
- (id)createDialogAction;
- (bool)enabled;
- (id)initWithJSObject:(id)arg1 context:(id)arg2;
- (void)setAction:(id)arg1;
- (void)setActivityIndicator:(id)arg1;
- (void)setBold:(bool)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setStyle:(long long)arg1;
- (void)setTitle:(id)arg1;
- (void)setUnderlyingJSObject:(id)arg1;
- (long long)style;
- (id)title;
- (id)underlyingJSObject;

@end
