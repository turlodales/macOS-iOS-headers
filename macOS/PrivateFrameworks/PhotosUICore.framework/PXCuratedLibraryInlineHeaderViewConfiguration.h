//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface PXCuratedLibraryInlineHeaderViewConfiguration : NSObject <NSCopying>
{
    BOOL _swapTitleAndSubtitle;
    unsigned long long _style;
    NSString *_title;
    NSString *_subtitle;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL swapTitleAndSubtitle; // @synthesize swapTitleAndSubtitle=_swapTitleAndSubtitle;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) unsigned long long style; // @synthesize style=_style;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 swapTitleAndSubtitle:(BOOL)arg3 style:(unsigned long long)arg4;

@end

