//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CKRecordUtilities : NSObject
{
}

+ (id)recordIDUsingSalt:(id)arg1 zoneID:(id)arg2 guid:(id)arg3;
+ (id)recordIDUsingName:(id)arg1 zoneID:(id)arg2;
+ (id)recordNameForRecordChangeTag:(id)arg1 ckRecordID:(id)arg2 salt:(id)arg3 guid:(id)arg4;
+ (id)recordNameUsingSalt:(id)arg1 guid:(id)arg2;

@end

