//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface WXSection : NSObject
{
}

+ (float)scaleFromPrinterSettings:(id)arg1;
+ (void)readFrom:(struct _xmlNode *)arg1 to:(id)arg2 state:(id)arg3;
+ (id)chapterNumberSeparatorEnumMap;
+ (id)verticalJustificationEnumMap;
+ (id)lineNumberRestartEnumMap;
+ (id)pageBorderOffsetEnumMap;
+ (id)pageBorderDisplayEnumMap;
+ (id)pageBorderDepthEnumMap;
+ (id)pageOrientationEnumMap;
+ (id)sectionBreakEnumMap;
+ (void)mapProperties:(struct _xmlNode *)arg1 toSection:(id)arg2 state:(id)arg3;
+ (void)mapPrinterSettings:(struct _xmlNode *)arg1 toSection:(id)arg2 state:(id)arg3;
+ (void)mapFooter:(struct _xmlNode *)arg1 toSection:(id)arg2 state:(id)arg3;
+ (void)mapHeader:(struct _xmlNode *)arg1 toSection:(id)arg2 state:(id)arg3;

@end

