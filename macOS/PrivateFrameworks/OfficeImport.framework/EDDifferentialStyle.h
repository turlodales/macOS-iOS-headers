//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class EDAlignmentInfo, EDBorders, EDContentFormat, EDFill, EDFont, EDProtection;

__attribute__((visibility("hidden")))
@interface EDDifferentialStyle : NSObject <NSCopying>
{
    EDAlignmentInfo *mAlignmentInfo;
    EDBorders *mBorders;
    EDFill *mFill;
    EDFont *mFont;
    EDProtection *mProtection;
    EDContentFormat *mContentFormat;
}

+ (id)differentialStyle;
- (void).cxx_destruct;
@property(retain, nonatomic) EDContentFormat *contentFormat; // @synthesize contentFormat=mContentFormat;
@property(retain, nonatomic) EDProtection *protection; // @synthesize protection=mProtection;
@property(retain, nonatomic) EDFont *font; // @synthesize font=mFont;
@property(retain, nonatomic) EDFill *fill; // @synthesize fill=mFill;
@property(retain, nonatomic) EDBorders *borders; // @synthesize borders=mBorders;
@property(retain, nonatomic) EDAlignmentInfo *alignmentInfo; // @synthesize alignmentInfo=mAlignmentInfo;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

