//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarAgentLink/ABRemoteGroup.h>

@class NSData;

@interface ABRemoteSmartGroup : ABRemoteGroup
{
    NSData *_searchElement;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain) NSData *searchElement; // @synthesize searchElement=_searchElement;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

