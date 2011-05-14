/* Type list, used to create metadata */

/* Enumerations */
TRACE_EVENT_ENUM(hrtimer_mode,
        V(HRTIMER_MODE_ABS),
        V(HRTIMER_MODE_REL),
        V(HRTIMER_MODE_PINNED),
        V(HRTIMER_MODE_ABS_PINNED),
        V(HRTIMER_MODE_REL_PINNED),
	R(HRTIMER_MODE_UNDEFINED, 0x04, 0x20),	/* Example (to remove) */
)

TRACE_EVENT_TYPE(hrtimer_mode, enum, unsigned char)