//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GEOAnnotatedItemList.h"

@class GEOMapItemAttribution, NSString;

@interface GEOAnnotatedItemList : NSObject <GEOAnnotatedItemList>
{
    id <GEOPictureItemContainer> _pictureItemContainer;
    id <GEOTextItemContainer> _textItemContainer;
    NSString *_title;
    int _annotatedItemStyle;
    GEOMapItemAttribution *_attribution;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) GEOMapItemAttribution *attribution; // @synthesize attribution=_attribution;
@property(readonly, nonatomic) int annotatedItemStyle; // @synthesize annotatedItemStyle=_annotatedItemStyle;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) id <GEOTextItemContainer> textItemContainer; // @synthesize textItemContainer=_textItemContainer;
@property(readonly, nonatomic) id <GEOPictureItemContainer> pictureItemContainer; // @synthesize pictureItemContainer=_pictureItemContainer;
- (id)initWithAnnotatedItemList:(id)arg1 attribution:(id)arg2;
- (id)initWithPictureItemContainer:(id)arg1 textItemContainer:(id)arg2 title:(id)arg3 annotatedItemStyle:(int)arg4 attribution:(id)arg5;
- (id)init;

@end

