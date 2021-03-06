/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UICollectionLayoutFramesQueryOffsets : NSObject {
    struct CGPoint { 
        double x; 
        double y; 
    }  _frameOffset;
    long long  _indexOffset;
    long long  _supplementaryIndexOffset;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } frameOffset;
@property (nonatomic) long long indexOffset;
@property (nonatomic) long long supplementaryIndexOffset;

- (struct CGPoint { double x1; double x2; })frameOffset;
- (long long)indexOffset;
- (id)init;
- (id)initWithFrameOffset:(struct CGPoint { double x1; double x2; })arg1 indexOffset:(long long)arg2 supplementaryIndexOffset:(long long)arg3;
- (void)setFrameOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setIndexOffset:(long long)arg1;
- (void)setSupplementaryIndexOffset:(long long)arg1;
- (long long)supplementaryIndexOffset;

@end
