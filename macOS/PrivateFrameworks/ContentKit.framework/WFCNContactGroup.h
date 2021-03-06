//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContentKit/WFContactGroup.h>

@class CNGroup, NSArray;

@interface WFCNContactGroup : WFContactGroup
{
    CNGroup *_group;
    NSArray *_cachedMembers;
}

+ (id)contactGroupWithCNGroup:(id)arg1;
+ (id)allContactGroups;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *cachedMembers; // @synthesize cachedMembers=_cachedMembers;
@property(readonly, nonatomic) CNGroup *group; // @synthesize group=_group;
- (BOOL)containsContact:(id)arg1;
@property(readonly, nonatomic) NSArray *contacts;
- (id)name;
- (id)initWithCNGroup:(id)arg1;

@end

