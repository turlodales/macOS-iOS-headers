//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/SAUITemplateBaseItem.h>

@class NSArray, NSDictionary, SAUIImageResource, SAUITemplateAttributedString;

@interface SAUITemplateTabularDataValue : SAUITemplateBaseItem
{
}

+ (id)tabularDataValueWithDictionary:(id)arg1 context:(id)arg2;
+ (id)tabularDataValue;
@property(copy, nonatomic) NSArray *themeImages;
@property(nonatomic) double imagePointWidth;
@property(nonatomic) double imagePointHeight;
@property(retain, nonatomic) SAUIImageResource *image;
@property(nonatomic) BOOL highlighted;
@property(copy, nonatomic) NSDictionary *attributedTexts;
@property(retain, nonatomic) SAUITemplateAttributedString *attributedText;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

