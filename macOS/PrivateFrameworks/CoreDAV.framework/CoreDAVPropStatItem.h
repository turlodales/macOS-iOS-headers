//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVErrorItem, CoreDAVLeafItem;

@interface CoreDAVPropStatItem : CoreDAVItem
{
    CoreDAVLeafItem *_status;
    CoreDAVItem *_prop;
    CoreDAVErrorItem *_errorItem;
    CoreDAVLeafItem *_responseDescription;
}

+ (id)copyParseRules;
- (void).cxx_destruct;
@property(retain, nonatomic) CoreDAVLeafItem *responseDescription; // @synthesize responseDescription=_responseDescription;
@property(retain, nonatomic) CoreDAVErrorItem *errorItem; // @synthesize errorItem=_errorItem;
@property(retain, nonatomic) CoreDAVItem *prop; // @synthesize prop=_prop;
@property(retain, nonatomic) CoreDAVLeafItem *status; // @synthesize status=_status;
- (id)description;
- (id)init;

@end

