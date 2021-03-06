/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXMediaViewControllerEventTracker : PXViewControllerEventTracker <PXChangeObserver, PXMediaViewControllerEventTracker> {
    id  _currentlyVisibleMedia;
    double  _currentlyVisibleMediaTimestamp;
    bool  _didInvalidateCurrentlyVisibleMediaOnce;
    <PXDisplayAsset> * _displayedAsset;
    <PXDisplayAssetCollection> * _displayedAssetCollection;
    id  _lastVisibleMedia;
    long long  _mediaViewedSignpost;
    long long  _specificMediaViewedSignpost;
    NSString * _viewName;
}

@property (nonatomic, retain) id currentlyVisibleMedia;
@property (nonatomic, readonly) double currentlyVisibleMediaTimestamp;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <PXDisplayAsset> *displayedAsset;
@property (nonatomic, retain) <PXDisplayAssetCollection> *displayedAssetCollection;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) id lastVisibleMedia;
@property (nonatomic) long long mediaViewedSignpost;
@property (nonatomic, copy) NSMutableDictionary *payload;
@property (nonatomic) long long specificMediaViewedSignpost;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *viewName;

- (void).cxx_destruct;
- (void)_invalidateCurrentlyVisibleMedia;
- (void)_logDidEndViewingMedia:(id)arg1 duration:(double)arg2;
- (void)_logDidStartViewingMedia:(id)arg1;
- (void)_updateCurrentlyVisibleMedia;
- (id)currentlyVisibleMedia;
- (double)currentlyVisibleMediaTimestamp;
- (id)displayedAsset;
- (id)displayedAssetCollection;
- (id)init;
- (id)initWithViewName:(id)arg1;
- (id)lastVisibleMedia;
- (long long)mediaViewedSignpost;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)setCurrentlyVisibleMedia:(id)arg1;
- (void)setDisplayedAsset:(id)arg1;
- (void)setDisplayedAssetCollection:(id)arg1;
- (void)setLastVisibleMedia:(id)arg1;
- (void)setMediaViewedSignpost:(long long)arg1;
- (void)setSpecificMediaViewedSignpost:(long long)arg1;
- (long long)specificMediaViewedSignpost;
- (id)viewName;

@end
