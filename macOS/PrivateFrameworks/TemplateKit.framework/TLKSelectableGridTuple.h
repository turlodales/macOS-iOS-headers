//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TemplateKit/TLKObject.h>

@class NSString;

@interface TLKSelectableGridTuple : TLKObject
{
    NSString *_title;
    NSString *_subtitle;
    double _size;
}

+ (id)tuplesForTitles:(id)arg1 subtitles:(id)arg2;
+ (id)tupleWithTitle:(id)arg1 subtitle:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) double size; // @synthesize size=_size;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (id)description;

@end

