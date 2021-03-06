//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber, WFFileType;

@interface WFDataDetectorResults : NSObject
{
    NSArray *_textCheckingResults;
    NSNumber *_number;
    NSArray *_dictionaries;
    WFFileType *_dictionaryType;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) WFFileType *dictionaryType; // @synthesize dictionaryType=_dictionaryType;
@property(readonly, nonatomic) NSArray *dictionaries; // @synthesize dictionaries=_dictionaries;
@property(readonly, nonatomic) NSNumber *number; // @synthesize number=_number;
@property(readonly, nonatomic) NSArray *textCheckingResults; // @synthesize textCheckingResults=_textCheckingResults;
@property(readonly, nonatomic) NSArray *dates;
@property(readonly, nonatomic) NSArray *phoneNumbers;
@property(readonly, nonatomic) NSArray *streetAddresses;
@property(readonly, nonatomic) NSArray *URLs;
- (id)init;
- (id)initWithTextCheckingResults:(id)arg1 number:(id)arg2 dictionaries:(id)arg3 dictionaryType:(id)arg4;

@end

