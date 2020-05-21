//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ESDContainer, NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface OABReaderState : NSObject
{
    Class mClient;
    NSMutableDictionary *mShapeIdMap;
    NSMutableDictionary *mEshContentIdMap;
    id <OADColorPalette> mColorPalette;
    NSMutableArray *mGroupStack;
    ESDContainer *mBstoreContainerHolder;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ESDContainer *bstoreContainerHolder; // @synthesize bstoreContainerHolder=mBstoreContainerHolder;
- (BOOL)useXmlBlobs;
- (id)xmlDrawingState;
- (void)resetForNewDrawing;
- (BOOL)isInsideGroup;
- (id)peekGroup;
- (id)popGroup;
- (void)pushGroup:(id)arg1;
- (id)groupStackReference;
- (int)groupDepth;
- (void)setColorPalette:(id)arg1;
- (id)colorPalette;
- (void)setContentObject:(id)arg1 forId:(int)arg2;
- (id)contentObjectForId:(int)arg1;
- (void)setDrawable:(id)arg1 forShapeId:(unsigned int)arg2;
- (id)drawableForShapeId:(int)arg1;
- (Class)client;
- (id)initWithClient:(Class)arg1;
- (id)init;

@end

