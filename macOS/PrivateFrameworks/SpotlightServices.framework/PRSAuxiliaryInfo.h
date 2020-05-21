//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SFColor;

@interface PRSAuxiliaryInfo : NSObject
{
    int _align;
    NSString *_top_text;
    NSString *_middle_text;
    NSString *_bottom_text;
    SFColor *_bottom_text_color;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) int align; // @synthesize align=_align;
@property(retain, nonatomic) SFColor *bottom_text_color; // @synthesize bottom_text_color=_bottom_text_color;
@property(retain, nonatomic) NSString *bottom_text; // @synthesize bottom_text=_bottom_text;
@property(retain, nonatomic) NSString *middle_text; // @synthesize middle_text=_middle_text;
@property(retain, nonatomic) NSString *top_text; // @synthesize top_text=_top_text;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;

@end

