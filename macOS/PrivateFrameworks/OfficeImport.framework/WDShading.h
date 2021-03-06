//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <OfficeImport/NSCopying-Protocol.h>

@class OITSUColor;

__attribute__((visibility("hidden")))
@interface WDShading : NSObject <NSCopying>
{
    int mStyle;
    OITSUColor *mForegroundColor;
    OITSUColor *mBackgroundColor;
}

+ (id)autoBackgroundColor;
+ (id)autoForegroundColor;
+ (id)nilShading;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setBackground:(id)arg1;
- (id)background;
- (void)setForeground:(id)arg1;
- (id)foreground;
- (void)setStyle:(int)arg1;
- (int)style;
- (void)setShading:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToShading:(id)arg1;
- (id)init;

@end

