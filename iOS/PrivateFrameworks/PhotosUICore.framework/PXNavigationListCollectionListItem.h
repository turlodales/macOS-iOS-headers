/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXNavigationListCollectionListItem : PXNavigationListItem {
    PHCollectionList * _collection;
    bool  _deletable;
    bool  _draggable;
    bool  _expandable;
    bool  _expanded;
    NSString * _glyphImageName;
    long long  _indentationLevel;
    bool  _renamable;
    bool  _reorderable;
}

@property (nonatomic, readonly) PHCollectionList *collection;
@property (getter=isExpanded, nonatomic) bool expanded;
@property (nonatomic) long long indentationLevel;

- (void).cxx_destruct;
- (id)collection;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)cpAnalyticsEventName;
- (id)glyphImageName;
- (long long)indentationLevel;
- (id)initWithCollectionList:(id)arg1 itemCount:(long long)arg2;
- (bool)isDeletable;
- (bool)isDraggable;
- (bool)isExpandable;
- (bool)isExpanded;
- (bool)isRenamable;
- (bool)isReorderable;
- (id)representedObject;
- (void)setExpanded:(bool)arg1;
- (void)setIndentationLevel:(long long)arg1;
- (id)viewControllerForCollectionWithGridPresentation:(id)arg1 existingAssetsFetchResult:(id)arg2;

@end
