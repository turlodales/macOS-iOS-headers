//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CommunicationFilterItem;

__attribute__((visibility("hidden")))
@interface CommunicationFilterItemCache : NSObject
{
    CommunicationFilterItem *_filterItem;
    long long _isInList;
}

@property(nonatomic) long long isInList; // @synthesize isInList=_isInList;
- (BOOL)matchesItem:(id)arg1;
- (void)dealloc;
- (id)initWithFilterItem:(id)arg1 isInList:(long long)arg2;

@end

