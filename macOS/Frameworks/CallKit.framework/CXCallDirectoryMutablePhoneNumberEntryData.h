//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CallKit/CXCallDirectoryPhoneNumberEntryData.h>

#import "NSCopying.h"

@class NSMutableData;

@interface CXCallDirectoryMutablePhoneNumberEntryData : CXCallDirectoryPhoneNumberEntryData <NSCopying>
{
    NSMutableData *_mutablePhoneNumberData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableData *mutablePhoneNumberData; // @synthesize mutablePhoneNumberData=_mutablePhoneNumberData;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)appendPhoneNumber:(long long)arg1;
- (id)init;
- (id)initWithCapacity:(unsigned long long)arg1;

@end

