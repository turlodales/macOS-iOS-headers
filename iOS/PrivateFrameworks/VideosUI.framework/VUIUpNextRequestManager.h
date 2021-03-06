/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUIUpNextRequestManager : NSObject {
    NSMutableDictionary * _ongoingCanonicalIDOperationDictionary;
}

@property (nonatomic, retain) NSMutableDictionary *ongoingCanonicalIDOperationDictionary;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_displayConfirmationForAction:(unsigned long long)arg1;
- (id)_init;
- (id)init;
- (id)ongoingCanonicalIDOperationDictionary;
- (void)sendRequestForCanonicalID:(id)arg1 action:(unsigned long long)arg2 confirmationShouldWaitCompletion:(bool)arg3;
- (void)setOngoingCanonicalIDOperationDictionary:(id)arg1;

@end
