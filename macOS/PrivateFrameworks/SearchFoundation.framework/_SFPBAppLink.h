//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSSecureCoding.h"
#import "_SFPBAppLink.h"

@class NSData, NSString, _SFPBImage, _SFPBPunchout;

@interface _SFPBAppLink : PBCodable <_SFPBAppLink, NSSecureCoding>
{
    int _imageAlign;
    NSString *_title;
    _SFPBPunchout *_appPunchout;
    _SFPBImage *_image;
}

- (void).cxx_destruct;
@property(nonatomic) int imageAlign; // @synthesize imageAlign=_imageAlign;
@property(retain, nonatomic) _SFPBImage *image; // @synthesize image=_image;
@property(retain, nonatomic) _SFPBPunchout *appPunchout; // @synthesize appPunchout=_appPunchout;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)initWithFacade:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

