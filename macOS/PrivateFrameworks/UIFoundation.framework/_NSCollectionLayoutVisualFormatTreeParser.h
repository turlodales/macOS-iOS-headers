//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, _NSCollectionLayoutVisualTreeNode;

@interface _NSCollectionLayoutVisualFormatTreeParser : NSObject
{
    _NSCollectionLayoutVisualTreeNode *_root;
    NSArray *_visualFormats;
}

+ (id)treeParserWithVisualFormats:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *visualFormats; // @synthesize visualFormats=_visualFormats;
@property(retain, nonatomic) _NSCollectionLayoutVisualTreeNode *root; // @synthesize root=_root;
- (id)_normalizeFractionsOfLayoutVFLItemsForItems:(id)arg1;
- (id)_nodeForParser:(id)arg1 withParserDict:(id)arg2 size:(id)arg3;
- (id)_parse;
- (void)_visitChildrenOfNodeDepthFirst:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateTreeNodesDepthFirstUsingBlock:(CDUnknownBlockType)arg1;
- (id)description;
- (id)initWithVisualFormats:(id)arg1;

@end

