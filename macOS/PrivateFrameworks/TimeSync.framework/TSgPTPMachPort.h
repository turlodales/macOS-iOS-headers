//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TimeSync/TSgPTPPort.h>

@interface TSgPTPMachPort : TSgPTPPort
{
}

+ (id)diagnosticDescriptionForService:(unsigned int)arg1 withIndent:(id)arg2;
+ (id)iokitMatchingDictionaryForClockIdentifier:(unsigned long long)arg1;
- (void)dealloc;
- (int)portType;
- (id)initWithMatchingDictionary:(id)arg1;
- (id)initWithService:(unsigned int)arg1;

@end

