//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ActionKit/FATObject.h>

@class NSArray, NSNumber, NSString;

@interface EDAMRelatedResult : FATObject
{
    NSArray *_notes;
    NSArray *_notebooks;
    NSArray *_tags;
    NSArray *_containingNotebooks;
    NSString *_debugInfo;
    NSArray *_experts;
    NSArray *_relatedContent;
    NSString *_cacheKey;
    NSNumber *_cacheExpires;
}

+ (id)structFields;
+ (id)structName;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *cacheExpires; // @synthesize cacheExpires=_cacheExpires;
@property(retain, nonatomic) NSString *cacheKey; // @synthesize cacheKey=_cacheKey;
@property(retain, nonatomic) NSArray *relatedContent; // @synthesize relatedContent=_relatedContent;
@property(retain, nonatomic) NSArray *experts; // @synthesize experts=_experts;
@property(retain, nonatomic) NSString *debugInfo; // @synthesize debugInfo=_debugInfo;
@property(retain, nonatomic) NSArray *containingNotebooks; // @synthesize containingNotebooks=_containingNotebooks;
@property(retain, nonatomic) NSArray *tags; // @synthesize tags=_tags;
@property(retain, nonatomic) NSArray *notebooks; // @synthesize notebooks=_notebooks;
@property(retain, nonatomic) NSArray *notes; // @synthesize notes=_notes;

@end

