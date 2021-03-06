//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface CNCollation : NSObject
{
    BOOL _indexExtraTokenizations;
    NSArray *_headerLanguages;
    NSArray *_indexSections;
    NSString *_searchTransform;
    NSString *_nameTransform;
    NSString *_searchCollatorIdentifier;
    NSString *_sortCollatorIdentifier;
}

+ (id)languageHeaderSectionsFromPropertyList:(id)arg1 collator:(struct UCollator *)arg2;
+ (id)indexSectionsFromPropertyList:(id)arg1;
+ (id)defaultSortCollatorIdentifier;
+ (id)sectionURL;
- (void).cxx_destruct;
@property(readonly) BOOL indexExtraTokenizations; // @synthesize indexExtraTokenizations=_indexExtraTokenizations;
@property(readonly) NSString *sortCollatorIdentifier; // @synthesize sortCollatorIdentifier=_sortCollatorIdentifier;
@property(readonly) NSString *searchCollatorIdentifier; // @synthesize searchCollatorIdentifier=_searchCollatorIdentifier;
@property(readonly) NSString *nameTransform; // @synthesize nameTransform=_nameTransform;
@property(readonly) NSString *searchTransform; // @synthesize searchTransform=_searchTransform;
@property(readonly) NSArray *indexSections; // @synthesize indexSections=_indexSections;
@property(readonly) NSArray *headerLanguages; // @synthesize headerLanguages=_headerLanguages;
- (id)initWithCollator:(struct UCollator *)arg1 URL:(id)arg2;
- (id)initWithCollator:(struct UCollator *)arg1;
- (id)init;

@end

