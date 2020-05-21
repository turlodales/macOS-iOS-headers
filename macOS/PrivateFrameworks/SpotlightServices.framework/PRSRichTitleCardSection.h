//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SpotlightServices/PRSTitleCardSection.h>

@class NSArray, NSImage, NSString, PRSActionButton, PRSAuxiliaryInfo;

@interface PRSRichTitleCardSection : PRSTitleCardSection
{
    BOOL _thumbnail_crop_circle;
    BOOL _rt_newline;
    BOOL _hide_vertical_divider;
    BOOL _isActionButtonAligned;
    int _title_align;
    float _rating;
    int _action_button_align;
    unsigned long long _title_weight;
    NSArray *_buy_buttons;
    NSString *_description_text;
    NSArray *_more_glyphs;
    NSImage *_rt_glyph;
    NSString *_rt_text;
    NSString *_rating_text;
    NSImage *_image;
    NSImage *_image_overlay;
    PRSAuxiliaryInfo *_auxiliary_info;
    PRSActionButton *_action_button;
    double _round_corner_pt;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) double round_corner_pt; // @synthesize round_corner_pt=_round_corner_pt;
@property(readonly, nonatomic) BOOL isActionButtonAligned; // @synthesize isActionButtonAligned=_isActionButtonAligned;
@property(readonly, nonatomic) int action_button_align; // @synthesize action_button_align=_action_button_align;
@property(readonly, nonatomic) PRSActionButton *action_button; // @synthesize action_button=_action_button;
@property(readonly, nonatomic) PRSAuxiliaryInfo *auxiliary_info; // @synthesize auxiliary_info=_auxiliary_info;
@property(readonly, nonatomic) NSImage *image_overlay; // @synthesize image_overlay=_image_overlay;
@property(readonly, nonatomic) NSImage *image; // @synthesize image=_image;
@property(readonly, nonatomic) NSString *rating_text; // @synthesize rating_text=_rating_text;
@property(readonly, nonatomic) float rating; // @synthesize rating=_rating;
@property(readonly, nonatomic) BOOL hide_vertical_divider; // @synthesize hide_vertical_divider=_hide_vertical_divider;
@property(readonly, nonatomic) BOOL rt_newline; // @synthesize rt_newline=_rt_newline;
@property(readonly, nonatomic) NSString *rt_text; // @synthesize rt_text=_rt_text;
@property(readonly, nonatomic) NSImage *rt_glyph; // @synthesize rt_glyph=_rt_glyph;
@property(readonly, nonatomic) NSArray *more_glyphs; // @synthesize more_glyphs=_more_glyphs;
@property(readonly, nonatomic) NSString *description_text; // @synthesize description_text=_description_text;
@property(readonly, nonatomic) NSArray *buy_buttons; // @synthesize buy_buttons=_buy_buttons;
@property(readonly, nonatomic) int title_align; // @synthesize title_align=_title_align;
@property(readonly, nonatomic) BOOL thumbnail_crop_circle; // @synthesize thumbnail_crop_circle=_thumbnail_crop_circle;
@property(readonly, nonatomic) unsigned long long title_weight; // @synthesize title_weight=_title_weight;
- (long long)type;
- (id)initWithSFSearchResult:(id)arg1 cardSection:(id)arg2;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 description:(id)arg3 title_weight:(unsigned long long)arg4 title_align:(long long)arg5 glyphs:(id)arg6 rt_glyph:(id)arg7 rt_text:(id)arg8 rt_newline:(BOOL)arg9 rating:(float)arg10 text:(id)arg11 image:(id)arg12 auxiliary_info:(id)arg13 action_button:(id)arg14 action_button_align:(int)arg15 buy_buttons:(id)arg16;

@end

