//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, REMList, REMSharee;

@interface REMListShareeContext : NSObject
{
    REMSharee *_sharedOwner;
    REMList *_list;
}

- (void).cxx_destruct;
@property(retain, nonatomic) REMList *list; // @synthesize list=_list;
@property(readonly, nonatomic) REMSharee *sharedOwner; // @synthesize sharedOwner=_sharedOwner;
- (id)shareesExcludingOwner;
@property(readonly, nonatomic) NSArray *sharees;
- (id)initWithList:(id)arg1;

@end

