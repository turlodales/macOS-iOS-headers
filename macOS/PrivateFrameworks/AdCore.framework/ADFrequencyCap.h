//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ADFrequencyCap : NSObject
{
    NSString *_identifier;
    NSString *_adMetadata;
    long long _downloadType;
    double _setTime;
}

- (void).cxx_destruct;
@property(nonatomic) double setTime; // @synthesize setTime=_setTime;
@property(nonatomic) long long downloadType; // @synthesize downloadType=_downloadType;
@property(retain, nonatomic) NSString *adMetadata; // @synthesize adMetadata=_adMetadata;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)description;
- (id)dictionaryRepresentation;
- (id)splitCapData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithIdentifier:(id)arg1;

@end

