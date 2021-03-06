/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUStorageManagementCPLService : NSObject <PXChangeObserver> {
    PXCPLUIStatusProvider * _cplUIStatusProvider;
    bool  _hasCompletedInitialUpload;
    id /* block */  _uploadCallbackHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasCompletedInitialUpload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ uploadCallbackHandler;

+ (id)sharedCPLService;

- (void).cxx_destruct;
- (void)_initCPLUIStatusProvider;
- (bool)hasCompletedInitialUpload;
- (id)init;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)setUploadCallbackHandler:(id /* block */)arg1;
- (id /* block */)uploadCallbackHandler;

@end
