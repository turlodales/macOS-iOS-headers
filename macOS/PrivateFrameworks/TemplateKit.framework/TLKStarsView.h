//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TemplateKit/TLKStackView.h>

@class NSFont;

__attribute__((visibility("hidden")))
@interface TLKStarsView : TLKStackView
{
    double _starRating;
    NSFont *_font;
    double _currentStarRating;
}

- (void).cxx_destruct;
@property(nonatomic) double currentStarRating; // @synthesize currentStarRating=_currentStarRating;
@property(retain, nonatomic) NSFont *font; // @synthesize font=_font;
@property(nonatomic) double starRating; // @synthesize starRating=_starRating;
- (void)updateStarImages;
- (id)init;

@end

