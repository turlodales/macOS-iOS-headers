//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "SFButton.h"

@class NSData, NSDictionary, NSString, SFImage;

@interface SFButton : NSObject <SFButton, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int isSelected:1;
    } _has;
    BOOL _isSelected;
    SFImage *_image;
    SFImage *_selectedImage;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) BOOL isSelected; // @synthesize isSelected=_isSelected;
@property(retain, nonatomic) SFImage *selectedImage; // @synthesize selectedImage=_selectedImage;
@property(retain, nonatomic) SFImage *image; // @synthesize image=_image;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)hasIsSelected;
- (id)initWithProtobuf:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

