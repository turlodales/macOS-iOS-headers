//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ReminderKit/NSSecureCoding-Protocol.h>

@interface _REMFetchExecutor : NSObject <NSSecureCoding>
{
}

+ (BOOL)supportsSecureCoding;
- (id)metadataFromFetchResult:(id)arg1 inStore:(id)arg2 error:(id *)arg3;
- (id)resultsFromFetchResult:(id)arg1 inStore:(id)arg2 error:(id *)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

