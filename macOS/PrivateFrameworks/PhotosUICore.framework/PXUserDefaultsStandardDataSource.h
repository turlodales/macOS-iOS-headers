//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PXUserDefaultsDataSource.h"

@class NSDate, NSObject<OS_dispatch_queue>;

@interface PXUserDefaultsStandardDataSource : NSObject <PXUserDefaultsDataSource>
{
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (void)setPersistedValue:(id)arg1 forKey:(id)arg2;
- (id)persistedValueForKey:(id)arg1;
@property(readonly, nonatomic) NSDate *currentDate;
- (id)init;

@end

