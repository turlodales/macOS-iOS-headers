//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSDictionary, NSMutableDictionary, NSString;

@interface IMKUICandidateItemLayout : NSObject <NSCopying>
{
    NSDictionary *_annotationAttributes;
    NSMutableDictionary *_cellDictionary;
    NSString *_identifier;
    NSDictionary *_selectionKeyAttributes;
    double _selectionKeyMargin;
    double _selectionPadding;
    NSDictionary *_titleAttributes;
}

- (void).cxx_destruct;
@property(retain) NSDictionary *titleAttributes; // @synthesize titleAttributes=_titleAttributes;
@property double selectionPadding; // @synthesize selectionPadding=_selectionPadding;
@property double selectionKeyMargin; // @synthesize selectionKeyMargin=_selectionKeyMargin;
@property(retain) NSDictionary *selectionKeyAttributes; // @synthesize selectionKeyAttributes=_selectionKeyAttributes;
@property(retain) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSMutableDictionary *cellDictionary; // @synthesize cellDictionary=_cellDictionary;
@property(retain) NSDictionary *annotationAttributes; // @synthesize annotationAttributes=_annotationAttributes;
- (void)clearCache;
- (void)setSizeValue:(id)arg1 key:(id)arg2;
- (void)setSizeValue:(id)arg1 candidateItem:(id)arg2;
- (id)sizeValueForCandidateItem:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

