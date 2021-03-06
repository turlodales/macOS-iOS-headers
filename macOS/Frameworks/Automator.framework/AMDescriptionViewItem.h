//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSImage, NSString;

@interface AMDescriptionViewItem : NSObject
{
    NSImage *_image;
    NSString *_name;
    NSString *_summary;
    NSString *_input;
    NSString *_alert;
    NSString *_note;
    NSString *_options;
    NSString *_requires;
    NSString *_output;
    NSString *_version;
    NSString *_website;
    NSString *_copyright;
    NSArray *_replacementItemNames;
    NSArray *_relatedItemNames;
    NSArray *_inputTypes;
    NSArray *_outputTypes;
    BOOL _isDeprecated;
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
- (void).cxx_destruct;
@property BOOL isDeprecated; // @synthesize isDeprecated=_isDeprecated;
@property(copy) NSArray *outputTypes; // @synthesize outputTypes=_outputTypes;
@property(copy) NSArray *inputTypes; // @synthesize inputTypes=_inputTypes;
@property(copy) NSArray *replacementItemNames; // @synthesize replacementItemNames=_replacementItemNames;
@property(copy) NSArray *relatedItemNames; // @synthesize relatedItemNames=_relatedItemNames;
@property(copy) NSString *copyright; // @synthesize copyright=_copyright;
@property(copy) NSString *website; // @synthesize website=_website;
@property(copy) NSString *version; // @synthesize version=_version;
@property(copy) NSString *output; // @synthesize output=_output;
@property(copy) NSString *requires; // @synthesize requires=_requires;
@property(copy) NSString *options; // @synthesize options=_options;
@property(copy) NSString *note; // @synthesize note=_note;
@property(copy) NSString *alert; // @synthesize alert=_alert;
@property(copy) NSString *input; // @synthesize input=_input;
@property(copy) NSString *summary; // @synthesize summary=_summary;
@property(copy) NSString *name; // @synthesize name=_name;
@property(retain) NSImage *image; // @synthesize image=_image;
@property(readonly, copy, nonatomic) NSString *relatedItemsDescription;
@property(readonly, copy, nonatomic) NSString *outputDescription;
@property(readonly, copy, nonatomic) NSString *inputDescription;
@property(readonly, copy, nonatomic) NSString *replacementSuggestion;
@property(readonly, copy, nonatomic) NSString *summaryDescription;

@end

