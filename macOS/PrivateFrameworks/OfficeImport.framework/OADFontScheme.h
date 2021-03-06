//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, OADFontCollection;

__attribute__((visibility("hidden")))
@interface OADFontScheme : NSObject
{
    NSString *_name;
    OADFontCollection *_majorFont;
    OADFontCollection *_minorFont;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) OADFontCollection *minorFont; // @synthesize minorFont=_minorFont;
@property(readonly, nonatomic) OADFontCollection *majorFont; // @synthesize majorFont=_majorFont;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void)validateFontScheme;
- (id)fontForId:(int)arg1;
- (BOOL)isEmpty;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)init;

@end

