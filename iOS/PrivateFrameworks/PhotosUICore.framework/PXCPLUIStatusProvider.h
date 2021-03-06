/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXCPLUIStatusProvider : PXObservable <PXChangeObserver> {
    PXCPLActionManager * _actionManager;
    PXCPLUIStatus * _status;
    PXObservable<PXCPLStatusProvider> * _statusProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PXCPLUIStatus *status;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_statusDidChange:(id)arg1;
- (void)_updateStatus;
- (id)init;
- (id)initWithActionManager:(id)arg1;
- (id)initWithActionManager:(id)arg1 statusProvider:(id)arg2;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)status;

@end
