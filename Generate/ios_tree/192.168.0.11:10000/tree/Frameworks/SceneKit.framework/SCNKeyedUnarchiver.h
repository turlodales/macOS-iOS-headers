/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNKeyedUnarchiver : NSKeyedUnarchiver {
    SCNAssetCatalog * _assetCatalog;
    NSDictionary * _context;
    NSArray * _currentMorphTargets;
    NSURL * _documentURL;
    id  _lookUpFoundInstance;
    NSString * _lookUpKey;
}

@property (nonatomic, retain) SCNAssetCatalog *assetCatalog;
@property (nonatomic, retain) NSDictionary *context;
@property (nonatomic, retain) NSArray *currentMorphTargets;
@property (nonatomic, readonly) NSURL *documentEnclosingURL;
@property (nonatomic, retain) NSURL *documentURL;
@property (nonatomic, retain) id lookUpFoundInstance;
@property (nonatomic, retain) NSString *lookUpKey;

- (id)assetCatalog;
- (id)context;
- (id)currentMorphTargets;
- (void)dealloc;
- (id)documentEnclosingURL;
- (id)documentURL;
- (id)initForReadingWithData:(id)arg1 secure:(bool)arg2;
- (id)lookUpFoundInstance;
- (id)lookUpKey;
- (void)setAssetCatalog:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setCurrentMorphTargets:(id)arg1;
- (void)setDocumentURL:(id)arg1;
- (void)setLookUpFoundInstance:(id)arg1;
- (void)setLookUpKey:(id)arg1;

@end
