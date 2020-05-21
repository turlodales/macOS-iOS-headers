//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableSet, PPLocalLocationStore, PPLocation;

@interface PPLocationCache : NSObject
{
    PPLocalLocationStore *_locationStore;
    BOOL _valid;
    PPLocation *_home;
    PPLocation *_work;
    NSMutableSet *_homeOrWorkAddresses;
}

- (void).cxx_destruct;
- (void)invalidate;
- (void)_refresh;
- (id)homeOrWorkAddresses;
- (id)locationForWork;
- (id)locationForHome;
- (id)initWithLocationStore:(id)arg1;
- (id)init;

@end

