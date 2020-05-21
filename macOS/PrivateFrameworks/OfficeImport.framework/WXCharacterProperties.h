//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface WXCharacterProperties : NSObject
{
}

+ (void)applyDeletionInsertionProperties:(id)arg1 state:(id)arg2;
+ (void)readFrom:(struct _xmlNode *)arg1 to:(id)arg2 state:(id)arg3;
+ (id)fontHintEnumMap;
+ (id)twoLineBracketsEnumMap;
+ (id)emphasisMarkEnumMap;
+ (id)verticalAlignEnumMap;
+ (id)ligaturesEnumMap;
+ (id)highlightEnumMap;
+ (id)underlineEnumMap;
+ (BOOL)isBooleanCharacterPropertyTrue:(int)arg1;
+ (BOOL)readBooleanCharacterProperty:(struct _xmlNode *)arg1 propertyName:(const char *)arg2 attributeName:(const char *)arg3 outValue:(int *)arg4 state:(id)arg5;
+ (id)readFillColor:(struct _xmlNode *)arg1 forTarget:(id)arg2 state:(id)arg3;
+ (void)readReflection:(id)arg1 fromXmlNode:(struct _xmlNode *)arg2 state:(id)arg3;
+ (BOOL)readBooleanCharacterMultipleProperty:(struct _xmlNode *)arg1 propertyName:(const char *)arg2 attributeName:(const char *)arg3 outValue:(int *)arg4 state:(id)arg5;
+ (void)readShadowForTarget:(id)arg1 fromXmlNode:(struct _xmlNode *)arg2 state:(id)arg3;

@end

