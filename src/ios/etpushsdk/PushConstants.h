//
//  etpushsdk.h
//  etpushsdk
//
//  Created by Eddie Roger on 9/7/12.
//  Copyright (c) 2012 ExactTarget, Inc. All rights reserved.
//

// SDK Version
#define ETPushSDKVersionString @"3.3.0"
#define ETPushSDKVersionNumber 3300

/** 
 Helpers.
 */
#define ETNotify(notification) \
    [[NSNotificationCenter defaultCenter] postNotificationName:notification object:nil];

/**
 Notification that is sent when a push fails for some reason.
 */
/** @constant ETPush Notifications Sent when the data request process has started */
#define ETRequestStarted                @"ETRequestStarted"
#define ETRequestNoData                 @"ETRequestNoData"
#define ETRequestFailed                 @"ETRequestFailed"
#define ETRequestComplete               @"ETRequestComplete"
#define ETRequestFailedOnLoadingResult  @"ETRequestFailedOnLoadingResult"
#define ETRequestServiceReturnedError   @"ETRequestServiceReturnedError"
#define ETRequestServiceResponseSuccess @"ETRequestServiceResponseSuccess"
#define ETRequestFinishedWithFailure    @"ETRequestFinishedWithFailure"


/**
  Constants for dealing with other stuff
  */
#define AppLifecycleForeground              @"AppLifecycleForeground"
#define AppLifecycleBackground              @"AppLifecycleBackground"

/** 
 Notifications around Messages 
 */
#define RichMessagesNowAvailable        @"RichMessagesNowAvailable"

/** 
 Geofence Constants
 */
#define ETLargeGeofence                 433 // Get it? 433 North Capitol. It's been a long journey getting here.
#define ETLargeGeofenceIdentifier       @"ExactTargetMagicGlobalFence"

/**
 Caches
 */
#define ET_TAG_CACHE                    @"ET_TAG_CACHE"
#define ET_SUBKEY_CACHE                 @"ET_SUBKEY_CACHE"
#define ET_ATTR_CACHE                   @"ET_ATTR_CACHE"

/**
 Deprecation warning declaration
 */
#define __DEPRECATED_WARNING(message) __attribute((deprecated(message)))

// Tracks the BOOL for each in NSUserDefaults
static NSString * const ETLocationServicesActive    = @"ETLocationServicesActive";
static NSString * const ETCloudPagesActive          = @"ETCloudPagesActive";
static NSString * const ETAnalyticsActive           = @"ETAnalyticsActive";

typedef enum {
    PushOriginationStateBackground = 0,
    PushOriginationStateForeground
} PushOriginationState;


