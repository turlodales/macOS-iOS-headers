//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Slideshows/MCAnimationPath.h>

#import <Slideshows/MCAnimationPathSupport-Protocol.h>

@class NSMutableSet, NSSet, NSString;

@interface MCAnimationPathCombo : MCAnimationPath <MCAnimationPathSupport>
{
    NSMutableSet *mAnimationPaths;
    NSString *mCombineOperation;
}

@property(copy) NSString *combineOperation; // @synthesize combineOperation=mCombineOperation;
- (void)_copySelfToSnapshot:(id)arg1;
- (id)xmlElement;
- (id)imprint;
- (void)demolish;
- (id)initWithImprint:(id)arg1;
- (void)removeAllAnimationPaths;
- (void)removeAnimationPathForKey:(id)arg1;
- (void)addAnimationPath:(id)arg1;
- (id)animationPathForKey:(id)arg1;
@property(readonly) unsigned long long countOfAnimationPaths;
@property(readonly) NSSet *animationPaths;
- (void)addAnimationPathsToXMLElement:(id)arg1;
- (id)imprintsForAnimationPaths;
- (void)demolishAnimationPaths;
- (void)initAnimationPathsWithImprints:(id)arg1;

@end

