//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSData, NSString, _INPBValueMetadata;

@protocol _INPBURLValue <NSObject>
@property(readonly, nonatomic) BOOL hasValueMetadata;
@property(retain, nonatomic) _INPBValueMetadata *valueMetadata;
@property(readonly, nonatomic) BOOL hasScope;
@property(copy, nonatomic) NSData *scope;
@property(readonly, nonatomic) BOOL hasAbsoluteString;
@property(copy, nonatomic) NSString *absoluteString;
@end

