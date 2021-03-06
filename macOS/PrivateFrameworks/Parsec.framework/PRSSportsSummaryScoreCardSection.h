//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Parsec/PRSBaseCardSection.h>

@class NSArray, NSString;

@interface PRSSportsSummaryScoreCardSection : PRSBaseCardSection
{
    NSArray *_images;
    NSArray *_image_labels;
    NSString *_title;
    NSString *_subtitle;
    NSArray *_images_alignment;
    NSString *_csType;
}

@property(readonly, nonatomic) NSString *csType; // @synthesize csType=_csType;
@property(readonly, nonatomic) NSArray *images_alignment; // @synthesize images_alignment=_images_alignment;
@property(readonly, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSArray *image_labels; // @synthesize image_labels=_image_labels;
@property(readonly, nonatomic) NSArray *images; // @synthesize images=_images;
- (void).cxx_destruct;
- (long long)type;
- (id)initWithSFSearchResult:(id)arg1 cardSection:(id)arg2;

@end

