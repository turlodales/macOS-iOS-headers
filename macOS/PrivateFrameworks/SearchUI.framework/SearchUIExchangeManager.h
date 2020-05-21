//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface SearchUIExchangeManager : NSObject
{
    NSMutableDictionary *_exchangesByName;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (void)saveChanges;
- (void)reloadExchangesFromDefaults;
- (void)_loadExchangesFromDefaults;
- (void)removeExchange:(id)arg1;
- (void)_addExchange:(id)arg1;
- (void)addExchange:(id)arg1;
- (BOOL)containsExchange:(id)arg1;
- (id)exchangeWithName:(id)arg1 createIfNotFound:(BOOL)arg2;
- (id)exchangeWithName:(id)arg1;
- (id)exchangeList;
- (id)init;

@end

