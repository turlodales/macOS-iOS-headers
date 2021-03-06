//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/_SFPBTextColumnSection-Protocol.h>

@class NSArray, NSData, NSString;

@interface _SFPBTextColumnSection : PBCodable <_SFPBTextColumnSection, NSSecureCoding>
{
    BOOL _textNoWrap;
    unsigned int _textWeight;
    NSArray *_textLines;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int textWeight; // @synthesize textWeight=_textWeight;
@property(nonatomic) BOOL textNoWrap; // @synthesize textNoWrap=_textNoWrap;
@property(copy, nonatomic) NSArray *textLines; // @synthesize textLines=_textLines;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)textLinesAtIndex:(unsigned long long)arg1;
- (unsigned long long)textLinesCount;
- (void)addTextLines:(id)arg1;
- (void)clearTextLines;
- (id)initWithFacade:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

