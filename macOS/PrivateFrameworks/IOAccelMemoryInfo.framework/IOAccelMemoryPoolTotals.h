//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IOAccelMemoryPoolTotals : NSObject
{
    NSString *device_name;
    NSString *pool;
    unsigned long long allocatedSize;
    unsigned long long residentSize;
    unsigned long long wiredSize;
    unsigned long long dirtySize;
    unsigned long long purgeableSize;
    unsigned long long nonpurgeableSize;
    unsigned long long orphanedSize;
}

@property unsigned long long orphanedSize; // @synthesize orphanedSize;
@property unsigned long long nonpurgeableSize; // @synthesize nonpurgeableSize;
@property unsigned long long purgeableSize; // @synthesize purgeableSize;
@property unsigned long long dirtySize; // @synthesize dirtySize;
@property unsigned long long wiredSize; // @synthesize wiredSize;
@property unsigned long long residentSize; // @synthesize residentSize;
@property unsigned long long allocatedSize; // @synthesize allocatedSize;
@property(retain) NSString *pool; // @synthesize pool;
@property(retain) NSString *device_name; // @synthesize device_name;
- (void)dealloc;

@end

