//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ExchangeWebServices/XSDefinitionProvider-Protocol.h>

@class NSDateComponents, NSString;

@interface EWSTimeChangeType : NSObject <XSDefinitionProvider>
{
    BOOL _IsOffsetSpecified;
    double _Offset;
    id _TimeChangePattern;
    NSDateComponents *_Time;
    NSString *_TimeZoneName;
}

+ (id)definition;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *TimeZoneName; // @synthesize TimeZoneName=_TimeZoneName;
@property(retain, nonatomic) NSDateComponents *Time; // @synthesize Time=_Time;
@property(retain, nonatomic) id TimeChangePattern; // @synthesize TimeChangePattern=_TimeChangePattern;
@property(nonatomic) BOOL IsOffsetSpecified; // @synthesize IsOffsetSpecified=_IsOffsetSpecified;
@property(nonatomic) double Offset; // @synthesize Offset=_Offset;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

