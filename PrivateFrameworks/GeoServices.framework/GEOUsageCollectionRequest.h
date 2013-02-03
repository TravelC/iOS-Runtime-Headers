/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSMutableArray;

@interface GEOUsageCollectionRequest : PBRequest {
    NSMutableArray *_directionsFeedbackCollections;
    NSMutableArray *_placeSearchFeedbackCollections;
    NSMutableArray *_transitAppLaunchFeedbackCollections;
    NSMutableArray *_usageCollections;
}

@property(retain) NSMutableArray * directionsFeedbackCollections;
@property(retain) NSMutableArray * placeSearchFeedbackCollections;
@property(retain) NSMutableArray * transitAppLaunchFeedbackCollections;
@property(retain) NSMutableArray * usageCollections;

- (void)addDirectionsFeedbackCollection:(id)arg1;
- (void)addPlaceSearchFeedbackCollection:(id)arg1;
- (void)addTransitAppLaunchFeedbackCollection:(id)arg1;
- (void)addUsageCollection:(id)arg1;
- (void)clearDirectionsFeedbackCollections;
- (void)clearPlaceSearchFeedbackCollections;
- (void)clearTransitAppLaunchFeedbackCollections;
- (void)clearUsageCollections;
- (void)copyTo:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)directionsFeedbackCollectionAtIndex:(unsigned int)arg1;
- (id)directionsFeedbackCollections;
- (unsigned int)directionsFeedbackCollectionsCount;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)placeSearchFeedbackCollectionAtIndex:(unsigned int)arg1;
- (id)placeSearchFeedbackCollections;
- (unsigned int)placeSearchFeedbackCollectionsCount;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setDirectionsFeedbackCollections:(id)arg1;
- (void)setPlaceSearchFeedbackCollections:(id)arg1;
- (void)setTransitAppLaunchFeedbackCollections:(id)arg1;
- (void)setUsageCollections:(id)arg1;
- (id)transitAppLaunchFeedbackCollectionAtIndex:(unsigned int)arg1;
- (id)transitAppLaunchFeedbackCollections;
- (unsigned int)transitAppLaunchFeedbackCollectionsCount;
- (id)usageCollectionAtIndex:(unsigned int)arg1;
- (id)usageCollections;
- (unsigned int)usageCollectionsCount;
- (void)writeTo:(id)arg1;

@end